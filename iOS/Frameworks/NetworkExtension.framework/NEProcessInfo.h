//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NEProcessInfo : NSObject
{
}

+ (_Bool)is64bitCapable;
+ (id)copyNEHelperUUIDs;
+ (id)copyDNSUUIDs;
+ (void)clearUUIDCache;
+ (id)copyUUIDsForExecutable:(id)arg1;
+ (id)copyUUIDsFromExecutable:(const char *)arg1;
+ (id)copyUUIDsForFatBinary:(int)arg1;
+ (id)copyUUIDForSingleArch:(int)arg1;
+ (id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned int)arg2;
+ (void)initGlobals;
- (id)init;

@end
