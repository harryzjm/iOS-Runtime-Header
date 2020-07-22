//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer-Protocol.h>

@class NSString;

@interface DADClientShareResponseDelegate <DAEventsCalendarSharingResponseConsumer>
{
    NSString *_calendarID;
    NSString *_shareID;
}

@property(retain, nonatomic) NSString *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)shareResponseFinishedWithError:(id)arg1;
- (void)_doResponseWithBlock:(CDUnknownBlockType)arg1;
- (void)reportAsJunk;
- (void)respondToShareRequestWithResponse:(long long)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 calendarID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

