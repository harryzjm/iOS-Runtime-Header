//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface _SKUIInspectablePropertySection : NSObject
{
    NSString *_friendlyName;
    NSMutableArray *_properties;
}

@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
- (void).cxx_destruct;
- (id)init;

@end

