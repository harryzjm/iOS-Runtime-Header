//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class EFFuture;
@protocol EFCancelable;

@protocol MessageListItemFutureLoading <NSObject>
@property(retain, nonatomic) id <EFCancelable> messageListItemFetchTimeoutCancelable;
@property(retain, nonatomic) EFFuture *messageListItemFuture;
@end

