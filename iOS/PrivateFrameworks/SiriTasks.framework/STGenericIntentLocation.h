//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriTasks/NSCoding-Protocol.h>

@class NSString;

@interface STGenericIntentLocation : NSObject <NSCoding>
{
    _Bool _isLatLong;
    NSString *_name;
    double _latitude;
    double _longitude;
}

@property(nonatomic) _Bool isLatLong; // @synthesize isLatLong=_isLatLong;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3;

@end
