//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IPAAutoRegistryEntry : NSObject
{
    _Bool _persistable;
    Class _autoCalculatorClass;
    Class _autoSettingsClass;
}

@property(nonatomic) _Bool persistable; // @synthesize persistable=_persistable;
@property(retain, nonatomic) Class autoSettingsClass; // @synthesize autoSettingsClass=_autoSettingsClass;
@property(retain, nonatomic) Class autoCalculatorClass; // @synthesize autoCalculatorClass=_autoCalculatorClass;
- (void).cxx_destruct;

@end

