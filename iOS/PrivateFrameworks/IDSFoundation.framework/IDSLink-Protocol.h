//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol IDSLinkDelegate;

@protocol IDSLink <NSObject>
@property __weak id <IDSLinkDelegate> alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate;
@property(readonly) unsigned long long headerOverhead;
@property(readonly) unsigned long long state;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(retain) NSString *deviceUniqueID;
@property(retain) NSString *cbuuid;
- (NSDictionary *)copyLinkStatsDict;
- (NSString *)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_ad679946 *)arg1 toDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;

@optional
- (void)start;
@end

