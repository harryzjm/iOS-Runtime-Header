//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXStoryPagedTimelineSpec : NSObject
{
    _Bool _displayOneAssetPerPage;
    double _regularInterpageSpacing;
    double _keyInterpageSpacing;
    struct CGSize _regularPageSize;
    struct CGSize _keyPageSize;
}

@property(nonatomic) _Bool displayOneAssetPerPage; // @synthesize displayOneAssetPerPage=_displayOneAssetPerPage;
@property(nonatomic) double keyInterpageSpacing; // @synthesize keyInterpageSpacing=_keyInterpageSpacing;
@property(nonatomic) double regularInterpageSpacing; // @synthesize regularInterpageSpacing=_regularInterpageSpacing;
@property(nonatomic) struct CGSize keyPageSize; // @synthesize keyPageSize=_keyPageSize;
@property(nonatomic) struct CGSize regularPageSize; // @synthesize regularPageSize=_regularPageSize;

@end
