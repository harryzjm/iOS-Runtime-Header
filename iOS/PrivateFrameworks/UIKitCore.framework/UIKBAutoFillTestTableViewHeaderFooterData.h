//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject
{
    NSString *_title;
    UIView *_headerFooterView;
    double _height;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) UIView *headerFooterView; // @synthesize headerFooterView=_headerFooterView;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 view:(id)arg2 height:(double)arg3;

@end

