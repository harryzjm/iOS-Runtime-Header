//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class NSObject;
@protocol IBAutolayoutItem;

@interface IBCocoaTouchScreenSizeLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    NSObject<IBAutolayoutItem> *_topLevelView;
    double _size;
    unsigned long long _attribute;
}

@property(nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSObject<IBAutolayoutItem> *topLevelView; // @synthesize topLevelView=_topLevelView;
- (void).cxx_destruct;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (id)constraintInDocument;
- (unsigned long long)hash;
- (_Bool)isEqualToAbstraction:(id)arg1;
- (id)description;
- (_Bool)isWidth;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithScreenSize:(double)arg1 attribute:(unsigned long long)arg2 topLevelView:(id)arg3;

@end

