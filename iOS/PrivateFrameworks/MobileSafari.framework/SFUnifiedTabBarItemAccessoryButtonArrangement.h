//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SFUnifiedTabBarItemAccessoryButtonArrangement : NSObject
{
    NSArray *_leadingButtonTypes;
    NSArray *_trailingButtonTypes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *trailingButtonTypes; // @synthesize trailingButtonTypes=_trailingButtonTypes;
@property(readonly, copy, nonatomic) NSArray *leadingButtonTypes; // @synthesize leadingButtonTypes=_leadingButtonTypes;
- (_Bool)isEqualToArrangement:(id)arg1;
- (id)initUsingButtonLayout:(long long)arg1 filteringButtonsUsingBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithLeadingButtonTypes:(id)arg1 trailingButtonTypes:(id)arg2;

@end
