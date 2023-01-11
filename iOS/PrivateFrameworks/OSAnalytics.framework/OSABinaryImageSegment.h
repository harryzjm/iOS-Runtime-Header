//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject
{
    int _source;
    OSASymbolInfo *_symbolInfo;
    unsigned long long _used_index;
}

@property unsigned long long used_index; // @synthesize used_index=_used_index;
@property int source; // @synthesize source=_source;
@property(readonly, nonatomic) OSASymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
- (void).cxx_destruct;
- (id)details;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char [16])arg3;
- (id)initWithSymbol:(id)arg1;

@end
