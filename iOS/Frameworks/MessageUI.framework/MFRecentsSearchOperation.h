//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MFRecentsSearchOperation
{
    NSString *_bundleIdentifier;
    unsigned long long _implicitGroupThreshold;
    unsigned long long _queryOptions;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 queryOptions:(unsigned long long)arg8;
- (unsigned long long)type;
- (void)main;
- (void)dealloc;

@end

