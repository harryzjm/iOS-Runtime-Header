//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSSystemConfiguration : NSObject
{
    struct __SCPreferences *_prefs;
}

+ (id)sharedInstance;
- (void)setProtocolConfigurationValue:(id)arg1 forKey:(struct __CFString *)arg2 protocolType:(struct __CFString *)arg3 serviceID:(struct __CFString *)arg4;
- (id)protocolConfigurationValueForKey:(struct __CFString *)arg1 protocolType:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;
- (void)setProtocolConfiguration:(id)arg1 protocolType:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;
- (id)protocolConfiguration:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (void)setInterfaceConfigurationValue:(id)arg1 forKey:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3;
- (id)interfaceConfigurationValueForKey:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2;
- (struct __CFString *)getServiceIDForPDPContext:(unsigned int)arg1;
- (struct __CFString *)voicemailServiceID;
- (struct __CFString *)dataServiceID;
- (void)cleanupPrefs;
- (unsigned char)synchronizeForWriting:(_Bool)arg1;
- (void)dealloc;

@end

