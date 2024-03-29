//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface Image_Estimator_HEIFInput : NSObject
{
    double _Input_File_Size;
    double _Input_Height;
    double _Input_Entropy;
    double _Aspect_Ratio;
    double _Target_File_Size;
    double _Target_Max_Dimension;
    double _Compression_Ratio;
    double _Input_H_x_W__NumOfPixels_;
    double _Target_Height;
    double _Target_Width;
    double _Input_log_NumOfPixels_;
    double _Ratio_of_NumOfPixels;
    double _Exponential_Entropy;
}

@property(nonatomic) double Exponential_Entropy; // @synthesize Exponential_Entropy=_Exponential_Entropy;
@property(nonatomic) double Ratio_of_NumOfPixels; // @synthesize Ratio_of_NumOfPixels=_Ratio_of_NumOfPixels;
@property(nonatomic) double Input_log_NumOfPixels_; // @synthesize Input_log_NumOfPixels_=_Input_log_NumOfPixels_;
@property(nonatomic) double Target_Width; // @synthesize Target_Width=_Target_Width;
@property(nonatomic) double Target_Height; // @synthesize Target_Height=_Target_Height;
@property(nonatomic) double Input_H_x_W__NumOfPixels_; // @synthesize Input_H_x_W__NumOfPixels_=_Input_H_x_W__NumOfPixels_;
@property(nonatomic) double Compression_Ratio; // @synthesize Compression_Ratio=_Compression_Ratio;
@property(nonatomic) double Target_Max_Dimension; // @synthesize Target_Max_Dimension=_Target_Max_Dimension;
@property(nonatomic) double Target_File_Size; // @synthesize Target_File_Size=_Target_File_Size;
@property(nonatomic) double Aspect_Ratio; // @synthesize Aspect_Ratio=_Aspect_Ratio;
@property(nonatomic) double Input_Entropy; // @synthesize Input_Entropy=_Input_Entropy;
@property(nonatomic) double Input_Height; // @synthesize Input_Height=_Input_Height;
@property(nonatomic) double Input_File_Size; // @synthesize Input_File_Size=_Input_File_Size;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput_File_Size:(double)arg1 Input_Height:(double)arg2 Input_Entropy:(double)arg3 Aspect_Ratio:(double)arg4 Target_File_Size:(double)arg5 Target_Max_Dimension:(double)arg6 Compression_Ratio:(double)arg7 Input_H_x_W__NumOfPixels_:(double)arg8 Target_Height:(double)arg9 Target_Width:(double)arg10 Input_log_NumOfPixels_:(double)arg11 Ratio_of_NumOfPixels:(double)arg12 Exponential_Entropy:(double)arg13;

@end

