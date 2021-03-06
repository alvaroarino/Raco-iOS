//
//  UIImageExtras.h
//  SportRSS
//
//  Created by Angel Garcia Olloqui on 11/03/09.
//  Copyright 2009 Mi Mundo iPhone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImage (Extras)

//Guarda la imagen en un fichero en formato JPEG
- (BOOL) saveAsJPEG:(NSString *)filepath quality:(CGFloat)quality;
//Guarda la imagen en un fichero en formato PNG
- (BOOL) saveAsPNG:(NSString *)filepath;

- (UIImage *)croppedImage:(CGRect)bounds;
- (UIImage *)thumbnailImage:(NSInteger)thumbnailSize
          transparentBorder:(NSUInteger)borderSize
               cornerRadius:(NSUInteger)cornerRadius
       interpolationQuality:(CGInterpolationQuality)quality;
- (UIImage *)resizedImage:(CGSize)newSize
     interpolationQuality:(CGInterpolationQuality)quality;
- (UIImage *)resizedImageWithContentMode:(UIViewContentMode)contentMode
                                  bounds:(CGSize)bounds
                    interpolationQuality:(CGInterpolationQuality)quality;



//Deprecated! Usar resizedImage:....
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;

@end;

