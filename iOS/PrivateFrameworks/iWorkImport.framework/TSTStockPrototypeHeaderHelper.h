//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSTStockPrototypeHeaderHelper : NSObject
{
    NSMutableArray *_popupItemStrings;
    NSMutableDictionary *_selectedIndexPerColumn;
}

@property(retain, nonatomic) NSMutableDictionary *selectedIndexPerColumn; // @synthesize selectedIndexPerColumn=_selectedIndexPerColumn;
@property(retain, nonatomic) NSMutableArray *popupItemStrings; // @synthesize popupItemStrings=_popupItemStrings;
- (void).cxx_destruct;
- (void)addPopupItemString:(id)arg1 mode:(short)arg2;
- (double)selectedIndexAtColumn:(unsigned char)arg1;
- (id)popupAttributeDisplayStrings;
- (id)init;

@end
