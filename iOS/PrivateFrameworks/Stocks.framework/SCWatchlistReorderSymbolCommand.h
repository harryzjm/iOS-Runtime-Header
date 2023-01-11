//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSString;

@interface SCWatchlistReorderSymbolCommand : NSObject <SCKZoneCommand>
{
    NSString *_symbol;
    NSString *_precedingSymbol;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *precedingSymbol; // @synthesize precedingSymbol=_precedingSymbol;
@property(readonly, copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithSymbol:(id)arg1 precedingSymbol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

