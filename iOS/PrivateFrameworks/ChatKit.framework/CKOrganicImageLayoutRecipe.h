//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CKOrganicImageLayoutRecipe : NSObject
{
    _Bool _wantsShadow;
    _Bool _isLastItem;
    double _rotation;
    double _offset;
    NSNumber *_relativeGroupCenter;
    NSNumber *_groupMaxX;
    NSString *_groupIdentifier;
    double _overlap;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(nonatomic) double overlap; // @synthesize overlap=_overlap;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) _Bool isLastItem; // @synthesize isLastItem=_isLastItem;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSNumber *groupMaxX; // @synthesize groupMaxX=_groupMaxX;
@property(retain, nonatomic) NSNumber *relativeGroupCenter; // @synthesize relativeGroupCenter=_relativeGroupCenter;
@property(nonatomic) _Bool wantsShadow; // @synthesize wantsShadow=_wantsShadow;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
- (id)description;
- (id)initWithRotation:(double)arg1 offset:(double)arg2 targetSize:(struct CGSize)arg3 overlap:(double)arg4 wantsShadow:(_Bool)arg5 groupIdentifier:(id)arg6;

@end
