//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, _UIFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutSection : NSObject
{
    _Bool _isValid;
    struct CGRect _validRect;
    struct CGRect _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    _Bool _fixedItemSize;
    _Bool _lastRowIncomplete;
    NSMutableArray *_items;
    NSMutableArray *_rows;
    double _verticalInterstice;
    double _horizontalInterstice;
    double _headerDimension;
    double _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    struct CGSize _itemSize;
    struct _NSRange _validItemRange;
    struct UIEdgeInsets _sectionMargins;
    struct CGRect _frame;
    struct CGRect _headerFrame;
    struct CGRect _footerFrame;
}

- (void).cxx_destruct;
- (id)init;

@end

