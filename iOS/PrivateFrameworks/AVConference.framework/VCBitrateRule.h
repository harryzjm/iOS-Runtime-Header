//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCBitrateRule : NSObject
{
    unsigned int _bitrate;
    int _connectionType;
    VCVideoRule *limitingRule;
}

@property(readonly, nonatomic) VCVideoRule *limitingRule; // @synthesize limitingRule;
@property int connectionType; // @synthesize connectionType=_connectionType;
@property unsigned int bitrate; // @synthesize bitrate=_bitrate;
- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;

@end

