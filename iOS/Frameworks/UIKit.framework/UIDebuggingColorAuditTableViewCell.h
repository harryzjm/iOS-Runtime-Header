//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingColorAuditTableViewCell
{
    UIView *colorView;
    NSLayoutConstraint *heightConstraint;
    _Bool _expanded;
    NSString *_symbol;
    UIColor *_color;
}

@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

