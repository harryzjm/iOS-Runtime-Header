//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TLKTableColumnAlignment
{
    _Bool _isEqualWidth;
    unsigned long long _columnAlignment;
    long long _dataAlignment;
}

@property(nonatomic) _Bool isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) unsigned long long columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)description;
- (long long)textAlignment;

@end

