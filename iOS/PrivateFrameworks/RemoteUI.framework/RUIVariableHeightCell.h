//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RUIVariableHeightCell
{
    _Bool _supportsAccessory;
    long long _detailTextAlignment;
}

@property(nonatomic) long long detailTextAlignment; // @synthesize detailTextAlignment=_detailTextAlignment;
@property(nonatomic) _Bool supportsAccessory; // @synthesize supportsAccessory=_supportsAccessory;
- (double)height;
- (struct CGSize)sizeForTextLabel:(id)arg1 width:(double)arg2;
- (void)layoutSubviews;

@end
