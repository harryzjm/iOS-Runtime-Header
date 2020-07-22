//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface VSValueTypeProperty : NSObject
{
    NSString *_name;
    unsigned long long _kind;
    NSSet *_allowedClasses;
    id _initialValue;
}

+ (id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4;
@property(retain, nonatomic) id initialValue; // @synthesize initialValue=_initialValue;
@property(copy, nonatomic) NSSet *allowedClasses; // @synthesize allowedClasses=_allowedClasses;
@property(nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
