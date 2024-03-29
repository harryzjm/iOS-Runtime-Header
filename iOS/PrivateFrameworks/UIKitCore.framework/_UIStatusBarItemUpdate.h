//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, _UIStatusBarData, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarItemUpdate : NSObject
{
    _Bool _enabilityChanged;
    _Bool _enabled;
    _Bool _dataChanged;
    _Bool _styleAttributesChanged;
    _UIStatusBarData *_data;
    _UIStatusBarStyleAttributes *_styleAttributes;
    NSDictionary *_placementInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *placementInfo; // @synthesize placementInfo=_placementInfo;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(nonatomic) _Bool styleAttributesChanged; // @synthesize styleAttributesChanged=_styleAttributesChanged;
@property(retain, nonatomic) _UIStatusBarData *data; // @synthesize data=_data;
@property(nonatomic) _Bool dataChanged; // @synthesize dataChanged=_dataChanged;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool enabilityChanged; // @synthesize enabilityChanged=_enabilityChanged;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

