//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PKSwatchColor : NSObject
{
    UIColor *_color;
    NSString *_identifier;
}

+ (id)swatchColor:(id)arg1 identifier:(id)arg2;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 identifier:(id)arg2;

@end
