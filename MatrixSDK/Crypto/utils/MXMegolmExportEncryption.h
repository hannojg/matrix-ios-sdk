/*
 Copyright 2017 OpenMarket Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

/**
 The error domain for this class.
 */
FOUNDATION_EXPORT NSString *const MXMegolmExportEncryptionErrorDomain;

/**
 All associated error code.
 */
typedef enum : NSUInteger
{
    MXMegolmExportErrorInvalidKeyFileTooShortCode = 0,
    MXMegolmExportErrorInvalidKeyFileUnsupportedVersionCode,
    MXMegolmExportErrorInvalidKeyFileHeaderNotFoundCode,
    MXMegolmExportErrorInvalidKeyFileTrailerNotFoundCode,
    MXMegolmExportErrorInvalidKeyFileAuthenticationFailedCode,
    MXMegolmExportErrorCannotInitialiseDecryptorCode,
    MXMegolmExportErrorCannotDecryptCode,

} MXMegolmExportErrorCode;


@interface MXMegolmExportEncryption : NSObject

/**
 Decrypt a megolm key file.

 @param data the key file data.
 @param password the password.
 @param error the output error.
 @return the decrypted content.
 */
+ (NSString*)decryptMegolmKeyFile:(NSData*)data withPassword:(NSString*)password error:(NSError**)error;

@end
