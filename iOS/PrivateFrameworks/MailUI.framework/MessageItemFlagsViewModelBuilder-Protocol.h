//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class NSIndexSet;

@protocol MessageItemFlagsViewModelBuilder <NSObject>
@property(nonatomic, getter=isMute) _Bool mute;
@property(nonatomic, getter=isNotify) _Bool notify;
@property(nonatomic, getter=isVIP) _Bool VIP;
@property(nonatomic, getter=isForwarded) _Bool forwarded;
@property(nonatomic, getter=isReplied) _Bool replied;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(nonatomic, getter=isFlagged) _Bool flagged;
@property(nonatomic, getter=isRead) _Bool read;
@end

