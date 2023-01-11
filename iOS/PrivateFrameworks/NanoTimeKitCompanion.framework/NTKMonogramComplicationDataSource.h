//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NTKMonogramTimelineEntryModel;

@interface NTKMonogramComplicationDataSource
{
    NTKMonogramTimelineEntryModel *_currentEntry;
    NSString *_monogramText;
    _Bool _listeningForMonogramNotifications;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (void)_reloadMonogramText;
- (void)_handleMonogramTextReload;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)_currentTimelineEntry;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)stopListeningForMonogramNotifications;
- (void)startListeningForMonogramNotifications;
- (_Bool)supportsTapAction;
- (void)pause;
- (void)resume;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end
