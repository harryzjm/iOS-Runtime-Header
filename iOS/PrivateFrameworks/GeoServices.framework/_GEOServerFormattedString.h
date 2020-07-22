//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOServerFormattedString-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOServerFormattedString : NSObject <GEOServerFormattedString>
{
    NSString *_formatString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *separators;
@property(readonly, nonatomic) NSArray *formatTokens;
@property(readonly, nonatomic) NSArray *formatStrings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
