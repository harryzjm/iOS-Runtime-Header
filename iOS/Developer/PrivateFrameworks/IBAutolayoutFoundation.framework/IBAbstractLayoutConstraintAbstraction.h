//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class IBLayoutConstraint, NSString;

@interface IBAbstractLayoutConstraintAbstraction : NSObject <IBBinaryArchiving>
{
}

@property(readonly, nonatomic) double priority;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
@property(readonly, nonatomic) IBLayoutConstraint *constraintInDocument;
- (_Bool)isEqualToAbstraction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)numberOfDrawableInstances;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

