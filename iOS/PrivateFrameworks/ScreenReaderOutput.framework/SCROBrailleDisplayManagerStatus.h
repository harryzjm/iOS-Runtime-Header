//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SCROBrailleDisplayManagerStatus : NSObject
{
    _Bool _currentAnnouncementUnread;
    _Bool _anyUnreadAnnouncements;
    int _virtualAlignment;
    NSData *_aggregatedData;
    long long _masterStatusCellIndex;
}

@property(nonatomic) _Bool anyUnreadAnnouncements; // @synthesize anyUnreadAnnouncements=_anyUnreadAnnouncements;
@property(nonatomic) _Bool currentAnnouncementUnread; // @synthesize currentAnnouncementUnread=_currentAnnouncementUnread;
@property(nonatomic) long long masterStatusCellIndex; // @synthesize masterStatusCellIndex=_masterStatusCellIndex;
@property(nonatomic) int virtualAlignment; // @synthesize virtualAlignment=_virtualAlignment;
@property(retain, nonatomic) NSData *aggregatedData; // @synthesize aggregatedData=_aggregatedData;
- (void).cxx_destruct;

@end

