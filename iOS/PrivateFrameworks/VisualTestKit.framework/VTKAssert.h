//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, XCTestCase;
@protocol VTKComparator, VTKReferenceItemsSource, VTKStoreManager;

__attribute__((visibility("hidden")))
@interface VTKAssert : NSObject
{
    NSMutableArray *_mutableDrawItems;
    XCTestCase *_testCase;
    id <VTKReferenceItemsSource> _referenceItemsSource;
    id <VTKStoreManager> _storeManager;
    id <VTKComparator> _comparator;
}

@property(readonly, nonatomic) id <VTKComparator> comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) id <VTKStoreManager> storeManager; // @synthesize storeManager=_storeManager;
@property(readonly, nonatomic) id <VTKReferenceItemsSource> referenceItemsSource; // @synthesize referenceItemsSource=_referenceItemsSource;
@property(readonly, nonatomic) __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
- (void).cxx_destruct;
- (id)_drawItems:(id)arg1 atImageUnderTest:(id)arg2;
@property(readonly, nonatomic) NSArray *drawItems;
- (void)addSquareGuideAt:(struct CGRect)arg1 withColor:(id)arg2;
- (void)addHorozontalGuideAt:(double)arg1 withColor:(id)arg2;
- (void)addVerticalGuideAt:(double)arg1 withColor:(id)arg2;
- (void)assertView:(id)arg1 identifier:(id)arg2 filePath:(id)arg3 lineNumber:(unsigned long long)arg4;
@property(copy, nonatomic) NSString *referenceImagesDirectory;
- (id)initWithTestCase:(id)arg1 referenceItemsSource:(id)arg2 storeMnanager:(id)arg3 imageComparator:(id)arg4;
- (id)initWithTestCase:(id)arg1;

@end

