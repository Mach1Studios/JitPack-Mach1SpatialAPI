<a href="http://dev.mach1.tech"><img src="http://dev.mach1.xyz/images/logo_big_b_l.png"></a>

# Mach1SpatialAPI #

* [LICENSE](#license)
* [SUMMARY](#summary)
* DOCUMENTATION: <a href="http://dev.mach1.tech">dev.mach1.tech</a>
* [CONTACT](#contact)

### [LICENSE](#license) ###

By downloading and/or using the Mach1 Spatial SDK, including use of any of the contents within the [binaries/](binaries),
you agree to and acknowledge the terms of use set forth by the [Mach1 Spatial SDK License](https://www.mach1.tech/license).
If you do not agree to the terms set forth by the [Mach1 Spatial SDK License](https://www.mach1.tech/license) you are not
permitted to use, link, compile and/or distribute any of the contents of this repository.

### [SUMMARY](#summary) ###

*Mach1 Spatial VVBP (Virtual Vector Based Panning) is a controlled virtual version of traditional VBAP (Vector Based Amplitude Panning) or SPS (Spatial PCM Sampling). The Mach1 Spatial formats are designed for simplicity and ease of use & implementation both for the content creators and the developers. The Mach1 Spatial audio mixes are based on only amplitude based coefficients changes for both encoding and decoding, and unlike many other spatial audio approaches, there are no additional signal altering processes (such as room modeling, delays or filters) to create coherent and accurate spatial sound fields and play them back from a first person headtracked perspective. Due to the simplicity of the format and vector space it relies on, it is also ideal for converting and carrying surround and spatial audio mixes without altering the mix to do so, making it an ideal server side audio middleman container. Bringing controlled post-produced spatial audio into new mediums easily.*

#### The Mach1 Spatial SDK includes four components and libraries: ####

* Mach1Encode lib: Encode and process input streams/audio into a Mach1Spatial VVBP format.
* Mach1Decode lib: Decode and process a Mach1Spatial VVBP format with device orientation / headtracking to output directional spatial audio.
* Mach1DecodePositional lib: Add additional optional decoding layer to decode spatial mixes with 6DOF for positional and orientational decoding.
* Mach1Transcode lib: Transcode / convert any audio format (surround/spatial) to or from a Mach1Spatial VVBP format.

## Examples Explained
We included two example Android apps: 
 - `mach1-example` A creator example app with Mach1Encode and Mach1Decode implementation
 - `mach1-decode-example` A stripped down Mach1Decode example only, for apps requiring just spatial audio playback, designed as an integration focused around C++ and an internal audio system. This example is provided for reference for C++.

`mach1-example` app uses full java implementation via gradle
`mach1-decode-example` app uses cpp libs called via JNI

## Setup

### JitPack

Step1. Add it in your root build.gradle at the end of repositories: 

```
	allprojects {
		repositories {
			...
			maven { url 'https://jitpack.io' }
		}
	}
```

Step 2. Add the dependency

```
dependencies {
	        implementation 'com.github.mach1:Mach1SpatialLibs:Tag'
	}
```

## Author

Mach1

### Contact

whatsup@mach1.tech

## License

Mach1SpatialAPI is available under the Mach1 Free Developer License Agreement. See the LICENSE file or the [Mach1 Spatial SDK License](https://www.mach1.tech/license) for more info.
