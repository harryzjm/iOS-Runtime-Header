//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader
{
    PHMediaFormatConversionDestination *_destination;
}

@property(retain) PHMediaFormatConversionDestination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)path;
- (id)dataSourcePathForDataRange:(struct _NSRange)arg1 error:(id *)arg2;
- (id)initWithDestination:(id)arg1;

@end

