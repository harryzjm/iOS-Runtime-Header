//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol BBMuteExpirationManagerDelegate, OS_dispatch_queue;

@interface BBMuteExpirationManager : NSObject
{
    id <BBMuteExpirationManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_timersBySectionID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *timersBySectionID; // @synthesize timersBySectionID=_timersBySectionID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BBMuteExpirationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_triggerDidFireForExpiryTimer:(id)arg1;
- (void)_cancelTimerForSectionID:(id)arg1;
- (id)scheduledExpirationDateForSectionID:(id)arg1;
- (void)stopWatchingExpirationsForSectionID:(id)arg1;
- (_Bool)cleanAndWatchExpirationsForSectionInfo:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
