//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLModelEncryptionUtils : NSObject
{
}

+ (_Bool)encryptFile:(id)arg1 withKey:(id)arg2 iv:(id)arg3 saveToFile:(id)arg4 error:(id *)arg5;
+ (_Bool)addEncryptionHeaderToUnencryptedFile:(id)arg1 saveToFile:(id)arg2 error:(id *)arg3;
+ (id)sinfData;

@end
