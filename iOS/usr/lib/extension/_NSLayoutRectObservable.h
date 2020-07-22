//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutRect;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface _NSLayoutRectObservable
{
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id <NSLayoutItem> _layoutItem;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;
- (void)_reflectUpdatedRect:(id)arg1;
- (void)dealloc;
- (id)initWithRect:(id)arg1 inLayoutItem:(id)arg2;

@end
