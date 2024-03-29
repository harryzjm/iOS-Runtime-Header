//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIBeamPointerSettings
{
    double _minLength;
    double _maxLength;
    double _maxSnapLength;
    double _width;
}

+ (id)settingsControllerModule;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double maxSnapLength; // @synthesize maxSnapLength=_maxSnapLength;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) double minLength; // @synthesize minLength=_minLength;
- (void)setDefaultValues;

@end

