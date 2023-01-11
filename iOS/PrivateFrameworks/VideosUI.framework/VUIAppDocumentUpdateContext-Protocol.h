//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class IKAppContext, IKUpdateServiceRequest, NSOrderedSet, NSString;

@protocol VUIAppDocumentUpdateContext <NSObject>
@property(readonly, nonatomic) IKUpdateServiceRequest *currentUpdateRequest;
- (void)updateCurrentUpdateRequestWithAppContext:(IKAppContext *)arg1 documentRef:(NSString *)arg2;
- (void)updateRequestCompletedWithViewElements:(NSOrderedSet *)arg1 documentRef:(NSString *)arg2;
@end
