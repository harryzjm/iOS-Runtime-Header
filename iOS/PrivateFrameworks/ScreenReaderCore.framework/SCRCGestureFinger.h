//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SCRCGestureFinger : NSObject
{
    unsigned long long _identifier;
    struct CGPoint _location;
    double _pressure;
}

- (long long)type;
- (double)pressure;
- (struct CGPoint)location;
- (unsigned long long)identifier;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3;

@end
