//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDAnnotation-Protocol.h>

@class TSDCommentStorage;

@protocol TSDComment <TSDAnnotation>
@property(readonly, nonatomic) _Bool isHighlight;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)commentWillBeAddedToDocumentRoot;
@end
