//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSAppDataUsagePolicy : NSObject
{
    _Bool _cellularDataEnabled;
    _Bool _wifiDataEnabled;
    _Bool _isManaged;
    _Bool _modificationAllowed;
}

@property(nonatomic) _Bool modificationAllowed; // @synthesize modificationAllowed=_modificationAllowed;
@property(nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(nonatomic) _Bool wifiDataEnabled; // @synthesize wifiDataEnabled=_wifiDataEnabled;
@property(nonatomic) _Bool cellularDataEnabled; // @synthesize cellularDataEnabled=_cellularDataEnabled;
- (id)init;

@end

