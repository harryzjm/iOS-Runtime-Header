//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPTextLineMaker : NSObject
{
    NSMutableArray *textLines;
}

- (unsigned int)makeTextLines:(id)arg1;
- (void)zOrderSplitLines:(id)arg1;
- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;
- (id)textLines;
- (void)dealloc;

@end

