//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIFlowLayoutRow, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutItem : NSObject
{
    struct {
        unsigned int sizeEstimated:1;
        unsigned int positionEstimated:1;
        unsigned int sizeHasBeenSet:1;
    } _itemFlags;
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    struct CGRect _itemFrame;
}

- (void).cxx_destruct;
- (id)copy;

@end

