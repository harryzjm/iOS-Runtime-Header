//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBAutolayoutFoundation/IBSparseAutolayoutInfo.h>

@class IBCocoaTouchToolObjectPackage;

@interface IBCocoaTouchToolSparseAutolayoutInfo : IBSparseAutolayoutInfo
{
    IBCocoaTouchToolObjectPackage *_objectPackage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IBCocoaTouchToolObjectPackage *objectPackage; // @synthesize objectPackage=_objectPackage;
- (void)addObject:(id)arg1 toParent:(id)arg2;
- (Class)autolayoutEngineClass;
- (Class)arbitrationUnitClass;
- (Class)symbolicLayoutConstantClass;
- (Class)layoutConstantClass;

@end

