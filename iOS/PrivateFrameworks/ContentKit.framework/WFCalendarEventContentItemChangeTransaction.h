//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEvent;

__attribute__((visibility("hidden")))
@interface WFCalendarEventContentItemChangeTransaction
{
    EKEvent *_mutableEvent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EKEvent *mutableEvent; // @synthesize mutableEvent=_mutableEvent;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;
- (id)initWithContentItem:(id)arg1;

@end
