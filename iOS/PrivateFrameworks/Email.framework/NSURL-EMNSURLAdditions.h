//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (EMNSURLAdditions)
+ (id)em_mailToFromQueryItemKey;
@property(readonly, nonatomic) _Bool em_isMailboxURL;
@property(readonly, nonatomic) _Bool em_isAccountURL;
- (id)em_internalMessageID;
@property(readonly, nonatomic) _Bool em_isInternalMessageURL;
- (id)em_messageIDHeader;
@property(readonly, nonatomic) _Bool em_isMessageURL;
@end

