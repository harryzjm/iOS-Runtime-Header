//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSSizeVector, NSString;

@interface NSSUsageDataSizeCategory : NSObject
{
    NSString *_name;
    NSString *_categoryIdentifier;
    NSSSizeVector *_size;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSSSizeVector *size; // @synthesize size=_size;
@property(readonly, retain, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithIdentifier:(id)arg1 size:(id)arg2 name:(id)arg3;

@end
