//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, TSDPathSource;

@protocol TSDShapeCollectionShape <NSObject>
@property(readonly, nonatomic) int shapeType;
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *keywords;
- (unsigned long long)positionInCategoryWithID:(NSNumber *)arg1;
- (TSDPathSource *)pathSourceWithSize:(struct CGSize)arg1;
@end
