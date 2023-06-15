//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharedWithYou/NSObject-Protocol.h>

@class NSString, SWShareableContent;

@protocol SWShareableContentRepresentationProvider <NSObject>
- (void)loadRepresentationForContent:(SWShareableContent *)arg1 typeIdentifier:(NSString *)arg2 completionHandler:(void (^)(SLShareableContentLoadResult *, NSError *))arg3;
@end

