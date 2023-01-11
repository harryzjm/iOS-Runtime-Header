//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMNonDestructiveCropEnabledCommand
{
    _Bool __enabled;
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)initWithNonDestructiveCropEnabled:(_Bool)arg1;

@end
