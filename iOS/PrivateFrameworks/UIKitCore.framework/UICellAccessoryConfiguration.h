//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UICellAccessoryConfiguration : NSObject
{
    _Bool _leadingAlwaysNeedsLayout;
    _Bool _trailingAlwaysNeedsLayout;
    NSArray *_leadingAccessories;
    NSArray *_trailingAccessories;
}

@property(copy, nonatomic) NSArray *trailingAccessories; // @synthesize trailingAccessories=_trailingAccessories;
@property(copy, nonatomic) NSArray *leadingAccessories; // @synthesize leadingAccessories=_leadingAccessories;
- (void).cxx_destruct;
- (_Bool)alwaysNeedsLayout;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
